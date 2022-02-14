
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ loff_t ;
struct TYPE_5__ {scalar_t__ erasesize; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int,int*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_8 = 0, VAR_9, VAR_10, VAR_11 = 1;
 loff_t VAR_12;

 FUNC_4("erasetest\n");

 VAR_10 = 0;
 VAR_12 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1 && VAR_0[VAR_9]; ++VAR_9) {
  VAR_12 += VAR_3->erasesize;
  VAR_10 += 1;
 }

 FUNC_4("erasing block %d\n", VAR_10);
 VAR_8 = FUNC_0(VAR_3, VAR_10);
 if (VAR_8)
  return VAR_8;

 FUNC_4("writing 1st page of block %d\n", VAR_10);
 FUNC_5(&VAR_5, VAR_7, VAR_4);
 VAR_8 = FUNC_2(VAR_3, VAR_12, VAR_4, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4("erasing block %d\n", VAR_10);
 VAR_8 = FUNC_0(VAR_3, VAR_10);
 if (VAR_8)
  return VAR_8;

 FUNC_4("reading 1st page of block %d\n", VAR_10);
 VAR_8 = FUNC_1(VAR_3, VAR_12, VAR_4, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_4("verifying 1st page of block %d is all 0xff\n",
        VAR_10);
 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
  if (VAR_6[VAR_9] != 0xff) {
   FUNC_3("verifying all 0xff failed at %d\n",
          VAR_9);
   VAR_2 += 1;
   VAR_11 = 0;
   break;
  }

 if (VAR_11 && !VAR_8)
  FUNC_4("erasetest ok\n");

 return VAR_8;
}
