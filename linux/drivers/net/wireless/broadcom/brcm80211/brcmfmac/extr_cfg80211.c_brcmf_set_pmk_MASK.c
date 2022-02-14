
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcmf_wsec_pmk_le {int * key; void* flags; void* key_len; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int pmk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,int ,struct brcmf_wsec_pmk_le*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int,char*,int const) ;

__attribute__((used)) static int FUNC_4(struct brcmf_if *VAR_2, const u8 *VAR_3, u16 VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_2->drvr;
 struct brcmf_wsec_pmk_le VAR_6;
 int VAR_7, VAR_8;


 VAR_6.key_len = FUNC_2(VAR_4 << 1);
 VAR_6.flags = FUNC_2(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_3(&VAR_6.key[2 * VAR_7], 3, "%02x", VAR_3[VAR_7]);


 VAR_8 = FUNC_1(VAR_2, VAR_0,
         &VAR_6, sizeof(VAR_6));
 if (VAR_8 < 0)
  FUNC_0(VAR_5, "failed to change PSK in firmware (len=%u)\n",
    VAR_4);

 return VAR_8;
}
