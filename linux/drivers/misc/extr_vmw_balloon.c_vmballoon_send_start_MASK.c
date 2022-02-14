
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {unsigned long capabilities; int max_page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 unsigned long FUNC_0 (struct vmballoon*,int ,unsigned long,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct vmballoon *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_8, 0,
     &VAR_10);

 switch (VAR_9) {
 case 128:
  VAR_7->capabilities = VAR_10;
  break;
 case 129:
  VAR_7->capabilities = VAR_3;
  break;
 default:
  return -VAR_0;
 }






 VAR_7->max_page_size = VAR_2;
 if ((VAR_7->capabilities & VAR_4) &&
     (VAR_7->capabilities & VAR_5))
  VAR_7->max_page_size = VAR_1;


 return 0;
}
