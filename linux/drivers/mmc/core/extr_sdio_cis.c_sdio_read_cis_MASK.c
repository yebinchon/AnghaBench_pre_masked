
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func_tuple {unsigned char* data; unsigned char code; unsigned char size; struct sdio_func_tuple* next; } ;
struct sdio_func {unsigned char num; struct sdio_func_tuple* tuples; } ;
struct mmc_card {struct sdio_func_tuple* tuples; int host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned char) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct mmc_card*,struct sdio_func*,char*,int ,int ,unsigned char,unsigned char*,unsigned char) ;
 int FUNC_3 (struct sdio_func_tuple*) ;
 struct sdio_func_tuple* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mmc_card*,int ,int ,unsigned int,int ,unsigned char*) ;
 int FUNC_7 (char*,int ,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_8(struct mmc_card *VAR_7, struct sdio_func *VAR_8)
{
 int VAR_9;
 struct sdio_func_tuple *VAR_10, **VAR_11;
 unsigned VAR_12, VAR_13 = 0;






 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  unsigned char VAR_14, VAR_15;

  if (VAR_8)
   VAR_15 = VAR_8->num;
  else
   VAR_15 = 0;

  VAR_9 = FUNC_6(VAR_7, 0, 0,
   FUNC_1(VAR_15) + VAR_5 + VAR_12, 0, &VAR_14);
  if (VAR_9)
   return VAR_9;
  VAR_13 |= VAR_14 << (VAR_12 * 8);
 }

 if (VAR_8)
  VAR_11 = &VAR_8->tuples;
 else
  VAR_11 = &VAR_7->tuples;

 if (*VAR_11)
  return -VAR_1;

 do {
  unsigned char VAR_16, VAR_17;

  VAR_9 = FUNC_6(VAR_7, 0, 0, VAR_13++, 0, &VAR_16);
  if (VAR_9)
   break;


  if (VAR_16 == 0xff)
   break;


  if (VAR_16 == 0x00)
   continue;

  VAR_9 = FUNC_6(VAR_7, 0, 0, VAR_13++, 0, &VAR_17);
  if (VAR_9)
   break;


  if (VAR_17 == 0xff)
   break;

  VAR_10 = FUNC_4(sizeof(*VAR_10) + VAR_17, VAR_4);
  if (!VAR_10)
   return -VAR_3;

  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
   VAR_9 = FUNC_6(VAR_7, 0, 0,
            VAR_13 + VAR_12, 0, &VAR_10->data[VAR_12]);
   if (VAR_9)
    break;
  }
  if (VAR_9) {
   FUNC_3(VAR_10);
   break;
  }


  VAR_9 = FUNC_2(VAR_7, VAR_8, "CIS",
        VAR_6, FUNC_0(VAR_6),
        VAR_16, VAR_10->data, VAR_17);
  if (VAR_9 == -VAR_0 || VAR_9 == -VAR_2) {




   VAR_10->next = ((void*)0);
   VAR_10->code = VAR_16;
   VAR_10->size = VAR_17;
   *VAR_11 = VAR_10;
   VAR_11 = &VAR_10->next;

   if (VAR_9 == -VAR_2) {

    FUNC_7("%s: queuing unknown"
           " CIS tuple 0x%02x (%u bytes)\n",
           FUNC_5(VAR_7->host),
           VAR_16, VAR_17);
   }


   VAR_9 = 0;
  } else {





   FUNC_3(VAR_10);
  }

  VAR_13 += VAR_17;
 } while (!VAR_9);





 if (VAR_8)
  *VAR_11 = VAR_7->tuples;

 return VAR_9;
}
