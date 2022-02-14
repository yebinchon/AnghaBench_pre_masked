
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadsheetfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct broadsheetfb_par*,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int,char*) ;
 int FUNC_2 (struct broadsheetfb_par*,int,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct broadsheetfb_par *VAR_2,
     int VAR_3, int VAR_4,
     int VAR_5, const char *VAR_6)
{
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_10 = (VAR_4 / VAR_3) * VAR_3;





 if (VAR_4 != VAR_10) {




  VAR_7 = FUNC_1(VAR_2, VAR_10,
      VAR_4, VAR_8);
  if (VAR_7)
   goto out;
 }


 FUNC_5(VAR_8 + VAR_4, VAR_6, VAR_5);





 VAR_9 = (VAR_4 + VAR_5) % VAR_3;

 if (VAR_9) {
  int VAR_11;

  VAR_11 = VAR_3 - VAR_9;


  VAR_7 = FUNC_1(VAR_2, VAR_9,
   VAR_11, VAR_8 + VAR_9);
  if (VAR_7)
   goto out;
 }




 VAR_7 = FUNC_0(VAR_2, VAR_10);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_2(VAR_2, VAR_10,
     VAR_8, VAR_3);
out:
 FUNC_3(VAR_8);
 return VAR_7;
}
