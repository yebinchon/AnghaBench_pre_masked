
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_mef_filter {int filt_type; int* byte_seq; int filt_action; scalar_t__ offset; scalar_t__ repeat; } ;
struct mwifiex_mef_entry {struct mwifiex_mef_filter* filter; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct mwifiex_private *VAR_5,
      struct mwifiex_mef_entry *VAR_6,
      u8 **VAR_7)
{
 struct mwifiex_mef_filter *VAR_8 = VAR_6->filter;
 int VAR_9, VAR_10;
 u8 *VAR_11 = *VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = &VAR_6->filter[VAR_9];
  if (!VAR_8->filt_type)
   break;
  FUNC_1((u32)VAR_8->repeat, VAR_11);
  VAR_11 += 4;
  *VAR_11 = VAR_4;
  VAR_11 += 1;

  VAR_10 = VAR_8->byte_seq[VAR_0];
  FUNC_0(VAR_11, VAR_8->byte_seq, VAR_10);
  VAR_11 += VAR_10;
  *VAR_11 = VAR_10;
  VAR_11 += 1;
  *VAR_11 = VAR_3;
  VAR_11 += 1;
  FUNC_1((u32)VAR_8->offset, VAR_11);
  VAR_11 += 4;
  *VAR_11 = VAR_4;
  VAR_11 += 1;

  *VAR_11 = VAR_8->filt_type;
  VAR_11 += 1;

  if (VAR_8->filt_action) {
   *VAR_11 = VAR_8->filt_action;
   VAR_11 += 1;
  }

  if (VAR_11 - *VAR_7 > VAR_2)
   return -1;
 }

 *VAR_7 = VAR_11;
 return 0;
}
