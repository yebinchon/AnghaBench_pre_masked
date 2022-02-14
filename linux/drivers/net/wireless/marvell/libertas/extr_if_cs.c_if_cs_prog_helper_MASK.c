
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct if_cs_card {scalar_t__ align_regs; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct if_cs_card*,int ,int) ;
 int FUNC_1 (struct if_cs_card*,int ) ;
 int FUNC_2 (struct if_cs_card*,int ) ;
 int FUNC_3 (struct if_cs_card*,int ,int) ;
 int FUNC_4 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_5 (struct if_cs_card*,int ,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct if_cs_card *VAR_10, const struct firmware *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 u8 VAR_14;






 if (VAR_10->align_regs)
  VAR_14 = FUNC_1(VAR_10, VAR_7) >> 8;
 else
  VAR_14 = FUNC_2(VAR_10, VAR_7);




 if (VAR_14 == VAR_9)
  goto done;


 if (VAR_14 != VAR_8) {
  VAR_12 = -VAR_0;
  goto done;
 }

 FUNC_6("helper size %td\n", VAR_11->size);




 for (;;) {

  int VAR_15 = 256;
  int VAR_16 = VAR_11->size - VAR_13;

  if (VAR_16 < VAR_15)
   VAR_15 = VAR_16;





  FUNC_3(VAR_10, VAR_4, VAR_15);


  if (VAR_15)
   FUNC_4(VAR_10, VAR_3,
    &VAR_11->data[VAR_13],
    VAR_15 >> 1);





  FUNC_5(VAR_10, VAR_6, VAR_1);





  FUNC_3(VAR_10, VAR_5, VAR_1);





  VAR_12 = FUNC_0(VAR_10, VAR_2,
   VAR_1);
  if (VAR_12 < 0) {
   FUNC_7("can't download helper at 0x%x, ret %d\n",
          VAR_13, VAR_12);
   goto done;
  }

  if (VAR_15 == 0)
   break;

  VAR_13 += VAR_15;
 }

done:
 return VAR_12;
}
