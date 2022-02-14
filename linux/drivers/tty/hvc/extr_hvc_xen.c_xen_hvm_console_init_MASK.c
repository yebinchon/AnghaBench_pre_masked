
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct xencons_info {int list; int vtermno; int * intf; void* evtchn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,void**) ;
 int FUNC_1 (struct xencons_info*) ;
 struct xencons_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct xencons_info* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (unsigned long,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_10;
 uint64_t VAR_11 = 0;
 unsigned long VAR_12;
 struct xencons_info *VAR_13;

 if (!FUNC_7())
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_3);
 if (!VAR_13) {
  VAR_13 = FUNC_2(sizeof(struct xencons_info), VAR_2);
  if (!VAR_13)
   return -VAR_1;
 } else if (VAR_13->intf != ((void*)0)) {

  return 0;
 }






 VAR_10 = FUNC_0(VAR_4, &VAR_11);
 if (VAR_10 < 0 || VAR_11 == 0)
  goto err;
 VAR_13->evtchn = VAR_11;
 VAR_11 = 0;
 VAR_10 = FUNC_0(VAR_5, &VAR_11);
 if (VAR_10 < 0 || VAR_11 == 0)
  goto err;
 VAR_12 = VAR_11;
 VAR_13->intf = FUNC_8(VAR_12 << VAR_6, VAR_7);
 if (VAR_13->intf == ((void*)0))
  goto err;
 VAR_13->vtermno = VAR_3;

 FUNC_4(&VAR_8);
 FUNC_3(&VAR_13->list, &VAR_9);
 FUNC_5(&VAR_8);

 return 0;
err:
 FUNC_1(VAR_13);
 return -VAR_0;
}
