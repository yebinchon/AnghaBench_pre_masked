
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
typedef int map_word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int VAR_4 ;
 int FUNC_1 (struct map_info*,int ) ;
 int FUNC_2 (struct map_info*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct map_info*) ;
 int FUNC_6 (struct map_info*) ;
 int FUNC_7 (struct map_info*,int ) ;

__attribute__((used)) static int FUNC_8(struct map_info *VAR_5)
{
 map_word VAR_6[4];
 unsigned int VAR_7 = 1;

 FUNC_3(&VAR_4);

 FUNC_6(VAR_5);


 VAR_6[0] = FUNC_1(VAR_5, FUNC_7(VAR_5, VAR_2));
 VAR_6[1] = FUNC_1(VAR_5, FUNC_7(VAR_5, VAR_0));
 VAR_6[2] = FUNC_1(VAR_5, FUNC_7(VAR_5, VAR_1));
 VAR_6[3] = FUNC_1(VAR_5, FUNC_7(VAR_5, VAR_3));


 if (!FUNC_2(VAR_5, FUNC_0('P'), VAR_6[0]))
  VAR_7 = 0;
 if (!FUNC_2(VAR_5, FUNC_0('F'), VAR_6[1]))
  VAR_7 = 0;
 if (!FUNC_2(VAR_5, FUNC_0('O'), VAR_6[2]))
  VAR_7 = 0;
 if (!FUNC_2(VAR_5, FUNC_0('W'), VAR_6[3]))
  VAR_7 = 0;

 FUNC_5(VAR_5);

 FUNC_4(&VAR_4);

 return VAR_7;
}
