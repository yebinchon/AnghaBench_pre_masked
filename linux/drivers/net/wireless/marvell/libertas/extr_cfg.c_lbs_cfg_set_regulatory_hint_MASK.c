
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int regioncode; TYPE_1__* wdev; } ;
struct TYPE_2__ {int wiphy; } ;


 size_t FUNC_0 (struct region_code_mapping const*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct lbs_private *VAR_0)
{
 struct region_code_mapping {
  const char *cn;
  int code;
 };


 static const struct region_code_mapping VAR_1[] = {
  {"US ", 0x10},
  {"CA ", 0x20},
  {"EU ", 0x30},
  {"ES ", 0x31},
  {"FR ", 0x32},
  {"JP ", 0x40},
 };
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_1[VAR_2].code == VAR_0->regioncode) {
   FUNC_1(VAR_0->wdev->wiphy, VAR_1[VAR_2].cn);
   break;
  }
}
