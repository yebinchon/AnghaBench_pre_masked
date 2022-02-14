
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct std_name {int id; } ;


 int FUNC_0 (int ) ;
 struct std_name* FUNC_1 (int ,int ,char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(v4l2_std_id *VAR_2,const char *VAR_3,
         unsigned int VAR_4)
{
 v4l2_std_id VAR_5 = 0;
 v4l2_std_id VAR_6 = 0;
 v4l2_std_id VAR_7;
 int VAR_8 = 0;
 unsigned int VAR_9;
 char VAR_10;
 const struct std_name *VAR_11;

 while (VAR_4) {
  if (!VAR_8) {
   VAR_9 = 0;
   while ((VAR_9 < VAR_4) && (VAR_3[VAR_9] != '-')) VAR_9++;
   if (VAR_9 >= VAR_4) return 0;
   VAR_11 = FUNC_1(VAR_0, FUNC_0(VAR_0),
        VAR_3,VAR_9);
   if (!VAR_11) return 0;
   VAR_9++;
   VAR_3 += VAR_9;
   VAR_4 -= VAR_9;
   VAR_8 = !0;
   VAR_6 = VAR_11->id;
   continue;
  }
  VAR_9 = 0;
  while (VAR_9 < VAR_4) {
   VAR_10 = VAR_3[VAR_9];
   if (VAR_10 == ';') {
    VAR_8 = 0;
    break;
   }
   if (VAR_10 == '/') break;
   VAR_9++;
  }
  VAR_11 = FUNC_1(VAR_1, FUNC_0(VAR_1),
       VAR_3,VAR_9);
  if (!VAR_11) return 0;
  VAR_7 = VAR_11->id & VAR_6;
  if (!VAR_7) return 0;
  VAR_5 |= VAR_7;
  if (VAR_9 < VAR_4) VAR_9++;
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;
 }

 if (VAR_2) *VAR_2 = VAR_5;
 return !0;
}
