
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int busnum; } ;
struct mon_bus {int * dent_t; int * dent_u; void* dent_s; } ;


 void* FUNC_0 (char*,int,int *,struct mon_bus*,int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct mon_bus *VAR_4, const struct usb_bus *VAR_5)
{
 enum { NAMESZ = 10 };
 char VAR_6[NAMESZ];
 int VAR_7 = VAR_5? VAR_5->busnum: 0;
 int VAR_8;

 if (VAR_0 == ((void*)0))
  return 0;

 if (VAR_5 != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_6, NAMESZ, "%dt", VAR_7);
  if (VAR_8 <= 0 || VAR_8 >= NAMESZ)
   goto err_print_t;
  VAR_4->dent_t = FUNC_0(VAR_6, 0600, VAR_0, VAR_4,
            &VAR_2);
 }

 VAR_8 = FUNC_2(VAR_6, NAMESZ, "%du", VAR_7);
 if (VAR_8 <= 0 || VAR_8 >= NAMESZ)
  goto err_print_u;
 VAR_4->dent_u = FUNC_0(VAR_6, 0600, VAR_0, VAR_4,
        &VAR_3);

 VAR_8 = FUNC_2(VAR_6, NAMESZ, "%ds", VAR_7);
 if (VAR_8 <= 0 || VAR_8 >= NAMESZ)
  goto err_print_s;
 VAR_4->dent_s = FUNC_0(VAR_6, 0600, VAR_0, VAR_4,
        &VAR_1);

 return 1;

err_print_s:
 FUNC_1(VAR_4->dent_u);
 VAR_4->dent_u = ((void*)0);
err_print_u:
 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_4->dent_t);
  VAR_4->dent_t = ((void*)0);
 }
err_print_t:
 return 0;
}
