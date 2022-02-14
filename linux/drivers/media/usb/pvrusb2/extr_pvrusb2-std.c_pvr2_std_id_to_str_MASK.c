
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct std_name {int id; char* name; } ;


 unsigned int FUNC_0 (struct std_name*) ;
 unsigned int FUNC_1 (char*,unsigned int,char*,...) ;
 struct std_name* VAR_0 ;
 struct std_name* VAR_1 ;

unsigned int FUNC_2(char *VAR_2, unsigned int VAR_3,
    v4l2_std_id VAR_4)
{
 unsigned int VAR_5,VAR_6;
 const struct std_name *VAR_7,*VAR_8;
 int VAR_9,VAR_10;
 unsigned int VAR_11,VAR_12;
 VAR_10 = 0;
 VAR_11 = 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_8 = VAR_0 + VAR_5;
  VAR_9 = 0;
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   VAR_7 = VAR_1 + VAR_6;
   if (!(VAR_8->id & VAR_7->id & VAR_4)) continue;
   if (!VAR_9) {
    if (VAR_10) {
     VAR_12 = FUNC_1(VAR_2,VAR_3,";");
     VAR_11 += VAR_12;
     VAR_3 -= VAR_12;
     VAR_2 += VAR_12;
    }
    VAR_10 = !0;
    VAR_12 = FUNC_1(VAR_2,VAR_3,
            "%s-",VAR_8->name);
    VAR_9 = !0;
   } else {
    VAR_12 = FUNC_1(VAR_2,VAR_3,"/");
   }
   VAR_11 += VAR_12;
   VAR_3 -= VAR_12;
   VAR_2 += VAR_12;
   VAR_12 = FUNC_1(VAR_2,VAR_3,
           VAR_7->name);
   VAR_11 += VAR_12;
   VAR_3 -= VAR_12;
   VAR_2 += VAR_12;
  }
 }
 return VAR_11;
}
