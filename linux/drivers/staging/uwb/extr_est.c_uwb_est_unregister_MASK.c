
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uwb_est_entry {int dummy; } ;
struct uwb_est {int type_event_high; size_t entries; struct uwb_est_entry const* entry; int product; int vendor; } ;
typedef int est_cmp ;


 int VAR_0 ;
 int FUNC_0 (int *,struct uwb_est*,int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int * VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(u8 VAR_4, u8 VAR_5, u16 VAR_6, u16 VAR_7,
         const struct uwb_est_entry *VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 unsigned VAR_11;
 struct uwb_est VAR_12 = {
  .type_event_high = VAR_4 << 8 | VAR_5,
  .vendor = VAR_6,
  .product = VAR_7,
  .entry = VAR_8,
  .entries = VAR_9
 };
 FUNC_2(&VAR_2, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  if (!FUNC_0(&VAR_1[VAR_11], &VAR_12, sizeof(VAR_12)))
   goto found;
 FUNC_3(&VAR_2, VAR_10);
 return -VAR_0;

found:
 if (VAR_11 < VAR_3 - 1)
  FUNC_1(&VAR_1[VAR_11], &VAR_1[VAR_11+1], VAR_3 - VAR_11 - 1);
 VAR_3--;
 FUNC_3(&VAR_2, VAR_10);
 return 0;
}
