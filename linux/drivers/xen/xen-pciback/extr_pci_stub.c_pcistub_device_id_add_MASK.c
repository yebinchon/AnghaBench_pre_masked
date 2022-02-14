
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcistub_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct pcistub_device_id* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct pcistub_device_id*,int,int,int) ;
 int FUNC_5 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct pcistub_device_id *VAR_8;
 int VAR_9 = 0, VAR_10 = FUNC_0(VAR_6, VAR_7);

 if (VAR_6 < 0) {
  for (VAR_6 = 0; !VAR_9 && VAR_6 < 32; ++VAR_6)
   VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
  return VAR_9;
 }

 if (VAR_7 < 0) {
  for (VAR_7 = 0; !VAR_9 && VAR_7 < 8; ++VAR_7)
   VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
  return VAR_9;
 }

 if ((


      !VAR_3 ? VAR_4 :

      VAR_4 < 0 || VAR_4 > 0xffff)
     || VAR_5 < 0 || VAR_5 > 0xff
     || FUNC_2(VAR_10) != VAR_6
     || FUNC_1(VAR_10) != VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_5("wants to seize %04x:%02x:%02x.%d\n",
   VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_4(VAR_8, VAR_4, VAR_5, VAR_10);

 return 0;
}
