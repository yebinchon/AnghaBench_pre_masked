
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_nsp {int cpp; } ;


 unsigned int FUNC_0 (char const* const*) ;
 unsigned int FUNC_1 (int ,int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nfp_nsp*) ;
 int FUNC_3 (char const*,int ,char*,char const* const,...) ;

__attribute__((used)) static void FUNC_4(struct nfp_nsp *VAR_5, u32 VAR_6)
{
 static const char * const VAR_7[] = {
          "Firmware from driver loaded",
          "Firmware from flash loaded",
          "Firmware loading failure",
 };
 static const char * const VAR_8[] = {
           "",
           "no named partition on flash",
           "error reading from flash",
           "can not deflate",
           "not a trusted file",
           "can not parse FW file",
           "MIP not found in FW file",
           "null firmware name in MIP",
           "FW version none",
           "FW build number none",
           "no FW selection policy HWInfo key found",
           "static FW selection policy",
           "FW version has precedence",
           "different FW application load requested",
           "development build",
 };
 unsigned int VAR_9, VAR_10;
 const char *VAR_11;

 VAR_9 = FUNC_1(VAR_3, VAR_6);
 VAR_10 = FUNC_1(VAR_4, VAR_6);

 if (!FUNC_2(VAR_5))
  return;


 if (VAR_9 == 0 && (VAR_10 == 0 || VAR_10 == 10))
  VAR_11 = VAR_0;
 else if (VAR_9 == 2)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_2;

 if (VAR_9 >= FUNC_0(VAR_7))
  FUNC_3(VAR_11, VAR_5->cpp, "FW loading status: %x\n",
      VAR_6);
 else if (VAR_10 >= FUNC_0(VAR_8))
  FUNC_3(VAR_11, VAR_5->cpp, "%s, reason code: %d\n",
      VAR_7[VAR_9], VAR_10);
 else
  FUNC_3(VAR_11, VAR_5->cpp, "%s%c %s\n",
      VAR_7[VAR_9], VAR_10 ? ',' : '.',
      VAR_8[VAR_10]);
}
