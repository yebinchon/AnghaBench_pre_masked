
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct us_data {unsigned char* iobuf; int send_ctrl_pipe; int srb; } ;
struct scatterlist {int dummy; } ;
struct jumpshot_info {int ssize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct us_data*,unsigned char*,int) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned int,int ) ;
 void* FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_7 (struct us_data*,int ,int ,int,int ,int,unsigned char*,int) ;
 int FUNC_8 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_5,
          struct jumpshot_info *VAR_6,
          u32 VAR_7,
          u32 VAR_8)
{
 unsigned char *VAR_9 = VAR_5->iobuf;
 unsigned char *VAR_10;
 unsigned char VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17 = 0;
 struct scatterlist *VAR_18 = ((void*)0);






 if (VAR_7 > 0x0FFFFFFF)
  return VAR_2;

 VAR_12 = VAR_8 * VAR_6->ssize;





 VAR_13 = FUNC_4(VAR_12, 65536u);
 VAR_10 = FUNC_3(VAR_13, VAR_1);
 if (VAR_10 == ((void*)0))
  return VAR_2;

 do {



  VAR_14 = FUNC_4(VAR_12, VAR_13);
  VAR_11 = (VAR_14 / VAR_6->ssize) & 0xff;


  FUNC_6(VAR_10, VAR_14, VAR_5->srb,
    &VAR_18, &VAR_17, VAR_0);

  VAR_9[0] = 0;
  VAR_9[1] = VAR_11;
  VAR_9[2] = VAR_7 & 0xFF;
  VAR_9[3] = (VAR_7 >> 8) & 0xFF;
  VAR_9[4] = (VAR_7 >> 16) & 0xFF;

  VAR_9[5] = 0xE0 | ((VAR_7 >> 24) & 0x0F);
  VAR_9[6] = 0x30;


  VAR_15 = FUNC_7(VAR_5, VAR_5->send_ctrl_pipe,
   0, 0x20, 0, 1, VAR_9, 7);
  if (VAR_15 != VAR_4)
   goto leave;


  VAR_15 = FUNC_0(VAR_5, VAR_10, VAR_14);
  if (VAR_15 != VAR_4)
   goto leave;




  VAR_16 = 0;
  do {
   VAR_15 = FUNC_1(VAR_5);
   if (VAR_15 != VAR_3) {


    FUNC_5(50);
   }
  } while ((VAR_15 != VAR_3) && (VAR_16 < 10));

  if (VAR_15 != VAR_3)
   FUNC_8(VAR_5, "Gah!  Waitcount = 10.  Bad write!?\n");

  VAR_7 += VAR_11;
  VAR_12 -= VAR_14;
 } while (VAR_12 > 0);

 FUNC_2(VAR_10);
 return VAR_15;

 leave:
 FUNC_2(VAR_10);
 return VAR_2;
}
