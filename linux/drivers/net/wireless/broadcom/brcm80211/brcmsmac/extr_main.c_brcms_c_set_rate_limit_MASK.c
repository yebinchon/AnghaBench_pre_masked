
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_c_info {int SRL; int LRL; void** wme_retries; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct brcms_c_info*) ;

int FUNC_3(struct brcms_c_info *VAR_5, u16 VAR_6, u16 VAR_7)
{
 int VAR_8;

 if (VAR_6 < 1 || VAR_6 > VAR_4 ||
     VAR_7 < 1 || VAR_7 > VAR_4)
  return -VAR_2;

 VAR_5->SRL = VAR_6;
 VAR_5->LRL = VAR_7;

 FUNC_1(VAR_5->hw, VAR_5->SRL, VAR_5->LRL);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_5->wme_retries[VAR_8] = FUNC_0(VAR_5->wme_retries[VAR_8],
            VAR_1, VAR_5->SRL);
  VAR_5->wme_retries[VAR_8] = FUNC_0(VAR_5->wme_retries[VAR_8],
            VAR_0, VAR_5->LRL);
 }
 FUNC_2(VAR_5);

 return 0;
}
