
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_msg_hdr {scalar_t__ barker; scalar_t__ num_pls; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct device* FUNC_2 (struct i2400m*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static
int FUNC_5(struct i2400m *VAR_3,
       const struct i2400m_msg_hdr *VAR_4,
       size_t VAR_5)
{
 int VAR_6 = -VAR_0;
 struct device *VAR_7 = FUNC_2(VAR_3);
 if (VAR_5 < sizeof(*VAR_4)) {
  FUNC_1(VAR_7, "RX: HW BUG? message with short header (%zu "
   "vs %zu bytes expected)\n", VAR_5, sizeof(*VAR_4));
  goto error;
 }
 if (VAR_4->barker != FUNC_0(VAR_1)) {
  FUNC_1(VAR_7, "RX: HW BUG? message received with unknown "
   "barker 0x%08x (buf_size %zu bytes)\n",
   FUNC_4(VAR_4->barker), VAR_5);
  goto error;
 }
 if (VAR_4->num_pls == 0) {
  FUNC_1(VAR_7, "RX: HW BUG? zero payload packets in message\n");
  goto error;
 }
 if (FUNC_3(VAR_4->num_pls) > VAR_2) {
  FUNC_1(VAR_7, "RX: HW BUG? message contains more payload "
   "than maximum; ignoring.\n");
  goto error;
 }
 VAR_6 = 0;
error:
 return VAR_6;
}
