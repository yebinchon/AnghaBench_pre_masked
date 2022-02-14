
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct memory_notify {int nr_pages; int start_pfn; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_5,
        unsigned long VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_0;
 struct memory_notify *VAR_9 = VAR_7;

 FUNC_4(&VAR_3);

 switch (VAR_6) {
 case 130:
  FUNC_6("memory offlining canceled");


 case 128:
  FUNC_6("memory is going online");
  FUNC_7(VAR_2, &VAR_4);
  if (FUNC_0(VAR_9->start_pfn, VAR_9->nr_pages))
   goto out_unlock;
  FUNC_2();
  break;

 case 129:
  FUNC_6("memory is going offline");
  FUNC_7(VAR_2, &VAR_4);
  if (FUNC_1(VAR_9->start_pfn, VAR_9->nr_pages))
   goto out_unlock;
  FUNC_2();
  break;

 default:
  break;
 }

 FUNC_3();
 VAR_8 = VAR_1;

out_unlock:
 FUNC_5(&VAR_3);
 return VAR_8;
}
