
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int temp ;
struct if_spi_card {int dummy; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct if_spi_card*,int,int ) ;
 int FUNC_6 (struct if_spi_card*,int ,int ,int ) ;
 int FUNC_7 (struct if_spi_card*,int ,int *,int) ;
 int FUNC_8 (struct if_spi_card*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct if_spi_card *VAR_8,
     const struct firmware *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 const u8 *VAR_12;
 u8 VAR_13[VAR_1];

 VAR_10 = FUNC_5(VAR_8, 1, 0);
 if (VAR_10)
  goto out;

 VAR_11 = VAR_9->size;
 VAR_12 = VAR_9->data;


 while (VAR_11 > 0) {




  VAR_10 = FUNC_8(VAR_8, VAR_7,
     VAR_1);
  if (VAR_10)
   goto out;

  VAR_10 = FUNC_6(VAR_8, VAR_6,
     VAR_5,
     VAR_5);
  if (VAR_10)
   goto out;





  FUNC_2(VAR_13, 0, sizeof(VAR_13));
  FUNC_1(VAR_13, VAR_12,
         FUNC_3(VAR_11, VAR_1));
  FUNC_0(10);
  VAR_10 = FUNC_7(VAR_8, VAR_4,
     VAR_13, VAR_1);
  if (VAR_10)
   goto out;


  VAR_10 = FUNC_8(VAR_8, VAR_6, 0);
  if (VAR_10)
   goto out;
  VAR_10 = FUNC_8(VAR_8, VAR_2,
           VAR_3);
  if (VAR_10)
   goto out;
  VAR_11 -= VAR_1;
  VAR_12 += VAR_1;
 }






 VAR_10 = FUNC_8(VAR_8, VAR_7, VAR_0);
 if (VAR_10)
  goto out;
 VAR_10 = FUNC_8(VAR_8, VAR_6, 0);
 if (VAR_10)
  goto out;
 VAR_10 = FUNC_8(VAR_8, VAR_2,
    VAR_3);
out:
 if (VAR_10)
  FUNC_4("failed to load helper firmware (err=%d)\n", VAR_10);

 return VAR_10;
}
