
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_cs_card {int dummy; } ;
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
 int FUNC_2 (struct if_cs_card*,int ,int) ;
 int FUNC_3 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_4 (struct if_cs_card*,int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct if_cs_card *VAR_10, const struct firmware *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;

 FUNC_5("fw size %td\n", VAR_11->size);

 VAR_12 = FUNC_0(VAR_10, VAR_9,
  VAR_8);
 if (VAR_12 < 0) {
  FUNC_6("helper firmware doesn't answer\n");
  goto done;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11->size; VAR_15 += VAR_14) {
  VAR_14 = FUNC_1(VAR_10, VAR_9);
  if (VAR_14 & 1) {
   VAR_13++;
   FUNC_7("odd, need to retry this firmware block\n");
  } else {
   VAR_13 = 0;
  }

  if (VAR_13 > 20) {
   FUNC_6("could not download firmware\n");
   VAR_12 = -VAR_0;
   goto done;
  }
  if (VAR_13) {
   VAR_15 -= VAR_14;
  }


  FUNC_2(VAR_10, VAR_4, VAR_14);

  FUNC_3(VAR_10, VAR_3,
   &VAR_11->data[VAR_15],
   (VAR_14+1) >> 1);
  FUNC_4(VAR_10, VAR_6, VAR_1);
  FUNC_2(VAR_10, VAR_5, VAR_1);

  VAR_12 = FUNC_0(VAR_10, VAR_2,
   VAR_1);
  if (VAR_12 < 0) {
   FUNC_6("can't download firmware at 0x%x\n", VAR_15);
   goto done;
  }
 }

 VAR_12 = FUNC_0(VAR_10, VAR_7, 0x5a);
 if (VAR_12 < 0)
  FUNC_6("firmware download failed\n");

done:
 return VAR_12;
}
