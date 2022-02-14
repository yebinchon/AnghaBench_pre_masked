
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bcf_hdr {int size; int header_len; } ;
struct i2400m {int fw_name; struct i2400m_bcf_hdr const** fw_hdrs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 struct device* FUNC_1 (struct i2400m*) ;
 int FUNC_2 (struct i2400m*,struct i2400m_bcf_hdr const*,size_t,size_t) ;
 int FUNC_3 (void**,size_t*,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
int FUNC_5(struct i2400m *VAR_2, const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = FUNC_1(VAR_2);
 size_t VAR_7 = 0;
 const struct i2400m_bcf_hdr *VAR_8;
 const void *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12 = 0, VAR_13 = 0;

 for (VAR_9 = VAR_3, VAR_11 = VAR_9 + VAR_4;
      VAR_9 < VAR_11;
      VAR_7++, VAR_9 = VAR_10) {
  size_t VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_14 = VAR_11 - VAR_9;
  VAR_15 = VAR_9 - VAR_3;
  if (VAR_14 <= sizeof(*VAR_8)) {
   FUNC_0(VAR_6, "firmware %s: %zu B left at @%zx, "
    "not enough for BCF header\n",
    VAR_2->fw_name, VAR_14, VAR_15);
   break;
  }
  VAR_8 = VAR_9;


  VAR_16 = sizeof(u32) * FUNC_4(VAR_8->header_len);
  VAR_17 = sizeof(u32) * FUNC_4(VAR_8->size);
  if (VAR_7 == 0)
   VAR_10 = VAR_9 + VAR_17;
  else
   VAR_10 = VAR_9 + VAR_16;

  VAR_5 = FUNC_2(VAR_2, VAR_8, VAR_7, VAR_15);
  if (VAR_5 < 0)
   continue;
  if (VAR_13 + 1 >= VAR_12) {



   VAR_5 = FUNC_3(
    (void **) &VAR_2->fw_hdrs, &VAR_12,
    sizeof(VAR_2->fw_hdrs[0]),
    VAR_1);
   if (VAR_5 < 0)
    goto error_zrealloc;
  }
  VAR_2->fw_hdrs[VAR_13] = VAR_8;
  VAR_13++;
 }
 if (VAR_7 == 0) {
  FUNC_0(VAR_6, "firmware %s: no usable headers found\n",
   VAR_2->fw_name);
  VAR_5 = -VAR_0;
 } else
  VAR_5 = 0;
error_zrealloc:
 return VAR_5;
}
