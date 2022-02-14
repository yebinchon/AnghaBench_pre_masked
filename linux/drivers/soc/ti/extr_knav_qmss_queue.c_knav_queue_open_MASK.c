
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void knav_queue ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;



 void* FUNC_1 (char const*,unsigned int,unsigned int) ;
 void* FUNC_2 (char const*,unsigned int,unsigned int) ;

void *FUNC_3(const char *VAR_1, unsigned VAR_2,
     unsigned VAR_3)
{
 struct knav_queue *VAR_4 = FUNC_0(-VAR_0);

 switch (VAR_2) {
 case 128:
 case 130:
 case 129:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;

 default:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 }
 return VAR_4;
}
