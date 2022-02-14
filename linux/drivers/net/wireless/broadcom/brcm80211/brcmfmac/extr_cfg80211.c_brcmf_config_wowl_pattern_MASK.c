
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_if {int dummy; } ;
struct brcmf_fil_wowl_pattern_le {void* type; void* patternsize; void* patternoffset; void* offset; void* masksize; int * cmd; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_if*,char*,int *,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static s32 FUNC_5(struct brcmf_if *VAR_3, u8 VAR_4[4],
         u8 *VAR_5, u32 VAR_6, u8 *VAR_7,
         u32 VAR_8)
{
 struct brcmf_fil_wowl_pattern_le *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u8 *VAR_12;
 u32 VAR_13;
 s32 VAR_14;

 VAR_10 = (VAR_6 + 7) / 8;
 VAR_11 = sizeof(*VAR_9) - sizeof(VAR_9->cmd) + VAR_10;

 VAR_13 = sizeof(*VAR_9) + VAR_6 + VAR_10;
 VAR_12 = FUNC_3(VAR_13, VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_9 = (struct brcmf_fil_wowl_pattern_le *)VAR_12;

 FUNC_4(VAR_9->cmd, VAR_4, 4);
 VAR_9->masksize = FUNC_1(VAR_10);
 VAR_9->offset = FUNC_1(VAR_8);
 VAR_9->patternoffset = FUNC_1(VAR_11);
 VAR_9->patternsize = FUNC_1(VAR_6);
 VAR_9->type = FUNC_1(VAR_0);

 if ((VAR_7) && (VAR_10))
  FUNC_4(VAR_12 + sizeof(*VAR_9), VAR_7, VAR_10);
 if ((VAR_5) && (VAR_6))
  FUNC_4(VAR_12 + sizeof(*VAR_9) + VAR_10, VAR_5, VAR_6);

 VAR_14 = FUNC_0(VAR_3, "wowl_pattern", VAR_12, VAR_13);

 FUNC_2(VAR_12);
 return VAR_14;
}
