
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct fmdev {int dummy; } ;
typedef int payload ;
typedef int asic_ver ;
typedef int asic_id ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fmdev*,scalar_t__*) ;
 int FUNC_2 (struct fmdev*) ;
 int FUNC_3 (struct fmdev*) ;
 scalar_t__ FUNC_4 (struct fmdev*,int ,int ,int *,int,int *,int*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_9(struct fmdev *VAR_12, u8 VAR_13)
{
 u16 VAR_14;
 __be16 VAR_15 = 0, VAR_16 = 0;
 int VAR_17, VAR_18;
 u8 VAR_19[50];

 if (VAR_13 >= VAR_5) {
  FUNC_6("Invalid firmware download option\n");
  return -VAR_2;
 }





 VAR_18 = FUNC_2(VAR_12);
 if (VAR_18 < 0) {
  FUNC_6("Unable to prepare FM Common\n");
  return VAR_18;
 }

 VAR_14 = VAR_3;
 if (FUNC_4(VAR_12, VAR_7, VAR_11, &VAR_14,
   sizeof(VAR_14), ((void*)0), ((void*)0)))
  goto rel;


 FUNC_7(20);

 if (FUNC_4(VAR_12, VAR_0, VAR_10, ((void*)0),
   sizeof(VAR_15), &VAR_15, &VAR_17))
  goto rel;

 if (FUNC_4(VAR_12, VAR_1, VAR_10, ((void*)0),
   sizeof(VAR_16), &VAR_16, &VAR_17))
  goto rel;

 FUNC_5("ASIC ID: 0x%x , ASIC Version: %d\n",
  FUNC_0(VAR_15), FUNC_0(VAR_16));

 FUNC_8(VAR_19, "%s_%x.%d.bts", VAR_4,
  FUNC_0(VAR_15), FUNC_0(VAR_16));

 VAR_18 = FUNC_1(VAR_12, VAR_19);
 if (VAR_18 < 0) {
  FUNC_5("Failed to download firmware file %s\n", VAR_19);
  goto rel;
 }
 FUNC_8(VAR_19, "%s_%x.%d.bts", (VAR_13 == VAR_6) ?
   VAR_8 : VAR_9,
   FUNC_0(VAR_15), FUNC_0(VAR_16));

 VAR_18 = FUNC_1(VAR_12, VAR_19);
 if (VAR_18 < 0) {
  FUNC_5("Failed to download firmware file %s\n", VAR_19);
  goto rel;
 } else
  return VAR_18;
rel:
 return FUNC_3(VAR_12);
}
