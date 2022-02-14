
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {int mutex; struct di_buf_entry* di_buf; } ;
struct di_buf_entry {int addr_sec_info; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct whc*,size_t,int ,void const*,size_t,int) ;
 int FUNC_4 (struct whc*,size_t) ;
 struct whc* FUNC_5 (struct wusbhc*) ;

int FUNC_6(struct wusbhc *VAR_2, u8 VAR_3, u32 VAR_4,
  const void *VAR_5, size_t VAR_6)
{
 struct whc *VAR_7 = FUNC_5(VAR_2);
 struct di_buf_entry *VAR_8 = &VAR_7->di_buf[VAR_3];
 int VAR_9;

 FUNC_1(&VAR_7->mutex);

 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6, 0);
  if (VAR_9)
   goto out;

  VAR_8->addr_sec_info &= ~VAR_0;
  VAR_8->addr_sec_info |= VAR_1 | FUNC_0(VAR_3);
 } else
  VAR_8->addr_sec_info &= ~VAR_1;

 VAR_9 = FUNC_4(VAR_7, VAR_3);
out:
 FUNC_2(&VAR_7->mutex);
 return VAR_9;
}
