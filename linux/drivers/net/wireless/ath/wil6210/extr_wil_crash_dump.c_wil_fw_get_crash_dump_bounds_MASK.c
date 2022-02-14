
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wil6210_priv {int dummy; } ;
struct fw_map {scalar_t__ host; scalar_t__ to; scalar_t__ from; int crash_dump; } ;


 int FUNC_0 (struct fw_map*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct fw_map* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct wil6210_priv *VAR_2,
     u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5;
 const struct fw_map *VAR_6;
 u32 VAR_7, VAR_8, VAR_9;

 if (!VAR_3)
  return -VAR_0;


 FUNC_1(FUNC_0(VAR_1) == 0);
 VAR_6 = &VAR_1[0];
 VAR_7 = VAR_6->host;
 VAR_8 = VAR_6->host + (VAR_6->to - VAR_6->from);

 for (VAR_5 = 1; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_6 = &VAR_1[VAR_5];

  if (!VAR_6->crash_dump)
   continue;

  if (VAR_6->host < VAR_7)
   VAR_7 = VAR_6->host;

  VAR_9 = VAR_6->host + (VAR_6->to - VAR_6->from);
  if (VAR_9 > VAR_8)
   VAR_8 = VAR_9;
 }

 *VAR_3 = VAR_8 - VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_7;

 return 0;
}
