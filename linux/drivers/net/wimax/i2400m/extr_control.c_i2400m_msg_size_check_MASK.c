
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_l3l4_hdr {int type; int length; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_2 (struct device*,char*,int,size_t,...) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct i2400m *VAR_1,
     const struct i2400m_l3l4_hdr *VAR_2,
     size_t VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_3(VAR_1);
 size_t VAR_6;
 FUNC_1(4, VAR_5, "(i2400m %p l3l4_hdr %p msg_size %zu)\n",
    VAR_1, VAR_2, VAR_3);
 if (VAR_3 < sizeof(*VAR_2)) {
  FUNC_2(VAR_5, "bad size for message header "
   "(expected at least %zu, got %zu)\n",
   (size_t) sizeof(*VAR_2), VAR_3);
  VAR_4 = -VAR_0;
  goto error_hdr_size;
 }
 VAR_6 = FUNC_4(VAR_2->length) + sizeof(*VAR_2);
 if (VAR_3 < VAR_6) {
  FUNC_2(VAR_5, "bad size for message code 0x%04x (expected %zu, "
   "got %zu)\n", FUNC_4(VAR_2->type),
   VAR_6, VAR_3);
  VAR_4 = -VAR_0;
 } else
  VAR_4 = 0;
error_hdr_size:
 FUNC_0(4, VAR_5,
  "(i2400m %p l3l4_hdr %p msg_size %zu) = %d\n",
  VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
