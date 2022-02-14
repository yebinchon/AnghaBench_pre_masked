
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,int ,int ) ;

__attribute__((used)) static s32
FUNC_2(struct brcmf_if *VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_6->drvr;
 s32 VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_6, VAR_0,
        VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_7, "Scan assoc time error (%d)\n", VAR_8);
  goto dongle_scantime_out;
 }
 VAR_8 = FUNC_1(VAR_6, VAR_2,
        VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_7, "Scan unassoc time error (%d)\n", VAR_8);
  goto dongle_scantime_out;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_1,
        VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_7, "Scan passive time error (%d)\n", VAR_8);
  goto dongle_scantime_out;
 }

dongle_scantime_out:
 return VAR_8;
}
