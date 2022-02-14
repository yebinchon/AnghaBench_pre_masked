
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4,
           unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_2 - 1, 0);
 unsigned int VAR_7 = FUNC_0(VAR_3 - 1, 0);
 unsigned int VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_8 = VAR_1 / VAR_4;
 VAR_9 = VAR_1 % VAR_4;

 if (VAR_9 > VAR_6) {
  VAR_9 = 0;
  VAR_8++;
 }






 if (VAR_8 > VAR_7) {
  VAR_8 = VAR_7;
  VAR_9 = VAR_6;
  VAR_10 = -VAR_0;
 }

 *VAR_5 = (VAR_8 << VAR_2) | VAR_9;

 return VAR_10;
}
