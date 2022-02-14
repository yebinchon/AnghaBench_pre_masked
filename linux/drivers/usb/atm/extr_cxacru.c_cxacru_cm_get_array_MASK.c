
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct cxacru_data {int usbatm; } ;
typedef enum cxacru_cm_request { ____Placeholder_cxacru_cm_request } cxacru_cm_request ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxacru_data*,int,int *,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct cxacru_data *VAR_4, enum cxacru_cm_request VAR_5,
          u32 *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 __le32 *VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 const int VAR_13 = VAR_0 / (4 * 2) - 1;
 int VAR_14 = ((VAR_7 - 1) / VAR_13 + 1 + VAR_7 * 2) * 4;

 VAR_10 = FUNC_2(VAR_14, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_5, ((void*)0), 0, (u8 *) VAR_10, VAR_14);
 if (VAR_8 < 0)
  goto cleanup;


 VAR_9 = VAR_8 / 4;
 for (VAR_11 = 0; VAR_11 < VAR_9; ) {
  int VAR_15 = FUNC_3(VAR_10[VAR_11++]);

  if (VAR_15 < 0 || VAR_15 > VAR_13 || VAR_15 > (VAR_9 - VAR_11) / 2) {
   if (FUNC_4())
    FUNC_5(VAR_4->usbatm, "invalid data length from cm %#x: %d\n",
     VAR_5, VAR_15);
   VAR_8 = -VAR_1;
   goto cleanup;
  }
  while (VAR_15--) {
   VAR_12 = FUNC_3(VAR_10[VAR_11++]);
   if (VAR_12 >= VAR_7) {
    if (FUNC_4())
     FUNC_5(VAR_4->usbatm, "wrong index %#x in response to cm %#x\n",
      VAR_12, VAR_5);
    VAR_8 = -VAR_1;
    goto cleanup;
   }
   VAR_6[VAR_12] = FUNC_3(VAR_10[VAR_11++]);
  }
 }

 VAR_8 = 0;

cleanup:
 FUNC_1(VAR_10);
 return VAR_8;
}
