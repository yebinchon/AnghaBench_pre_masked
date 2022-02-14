
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nic {int flags; scalar_t__ mac; struct firmware const* fw; int netdev; TYPE_1__* pdev; } ;
typedef struct firmware {int size; int* data; } const firmware ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct firmware const* FUNC_0 (int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct nic*,int ,int ,char*,char const*,int,...) ;
 int FUNC_2 (struct nic*,int ,int ,char*,char const*,int) ;
 int VAR_10 ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static const struct firmware *FUNC_5(struct nic *VAR_11)
{
 const char *VAR_12;
 const struct firmware *VAR_13 = VAR_11->fw;
 u8 VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 bool VAR_18 = 0;


 if (VAR_11->flags & VAR_5)
  return ((void*)0);
 if (VAR_11->mac == VAR_8) {
  VAR_12 = VAR_1;
 } else if (VAR_11->mac == VAR_9) {
  VAR_12 = VAR_2;
 } else if (VAR_11->mac == VAR_7 || VAR_11->mac == VAR_6) {
  VAR_12 = VAR_3;
  VAR_18 = 1;
 } else {
  return ((void*)0);
 }






 if (!VAR_13)
  VAR_17 = FUNC_4(&VAR_13, VAR_12, &VAR_11->pdev->dev);

 if (VAR_17) {
  if (VAR_18) {
   FUNC_1(VAR_11, VAR_10, VAR_11->netdev,
      "Failed to load firmware \"%s\": %d\n",
      VAR_12, VAR_17);
   return FUNC_0(VAR_17);
  } else {
   FUNC_2(VAR_11, VAR_10, VAR_11->netdev,
       "CPUSaver disabled. Needs \"%s\": %d\n",
       VAR_12, VAR_17);
   return ((void*)0);
  }
 }



 if (VAR_13->size != VAR_4 * 4 + 3) {
  FUNC_1(VAR_11, VAR_10, VAR_11->netdev,
     "Firmware \"%s\" has wrong size %zu\n",
     VAR_12, VAR_13->size);
  FUNC_3(VAR_13);
  return FUNC_0(-VAR_0);
 }


 VAR_14 = VAR_13->data[VAR_4 * 4];
 VAR_15 = VAR_13->data[VAR_4 * 4 + 1];
 VAR_16 = VAR_13->data[VAR_4 * 4 + 2];

 if (VAR_14 >= VAR_4 || VAR_15 >= VAR_4 ||
     VAR_16 >= VAR_4) {
  FUNC_1(VAR_11, VAR_10, VAR_11->netdev,
     "\"%s\" has bogus offset values (0x%x,0x%x,0x%x)\n",
     VAR_12, VAR_14, VAR_15, VAR_16);
  FUNC_3(VAR_13);
  return FUNC_0(-VAR_0);
 }



 VAR_11->fw = VAR_13;
 return VAR_13;
}
