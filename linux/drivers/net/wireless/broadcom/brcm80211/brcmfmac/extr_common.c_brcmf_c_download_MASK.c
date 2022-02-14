
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcmf_if {int dummy; } ;
struct brcmf_dload_data_le {void* crc; void* len; void* dload_type; void* flag; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_if*,char*,struct brcmf_dload_data_le*,scalar_t__) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct brcmf_if *VAR_3, u16 VAR_4,
       struct brcmf_dload_data_le *VAR_5,
       u32 VAR_6)
{
 s32 VAR_7;

 VAR_4 |= (VAR_1 << VAR_0);
 VAR_5->flag = FUNC_1(VAR_4);
 VAR_5->dload_type = FUNC_1(VAR_2);
 VAR_5->len = FUNC_2(VAR_6);
 VAR_5->crc = FUNC_2(0);
 VAR_6 = sizeof(*VAR_5) + VAR_6 - 1;

 VAR_7 = FUNC_0(VAR_3, "clmload", VAR_5, VAR_6);

 return VAR_7;
}
