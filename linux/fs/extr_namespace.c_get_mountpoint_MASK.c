
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountpoint {int m_count; int m_list; int m_hash; int m_dentry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mountpoint* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct mountpoint*) ;
 struct mountpoint* FUNC_8 (int,int ) ;
 struct mountpoint* FUNC_9 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct mountpoint *FUNC_13(struct dentry *VAR_5)
{
 struct mountpoint *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_2(VAR_5)) {

  if (FUNC_4(VAR_5))
   return FUNC_0(-VAR_1);
mountpoint:
  FUNC_11(&VAR_4);
  VAR_6 = FUNC_9(VAR_5);
  FUNC_12(&VAR_4);
  if (VAR_6)
   goto done;
 }

 if (!VAR_7)
  VAR_7 = FUNC_8(sizeof(struct mountpoint), VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_2);



 VAR_8 = FUNC_3(VAR_5);


 if (VAR_8 == -VAR_0)
  goto mountpoint;


 VAR_6 = FUNC_0(VAR_8);
 if (VAR_8)
  goto done;


 FUNC_11(&VAR_4);
 VAR_7->m_dentry = FUNC_5(VAR_5);
 VAR_7->m_count = 1;
 FUNC_6(&VAR_7->m_hash, FUNC_10(VAR_5));
 FUNC_1(&VAR_7->m_list);
 FUNC_12(&VAR_4);

 VAR_6 = VAR_7;
 VAR_7 = ((void*)0);
done:
 FUNC_7(VAR_7);
 return VAR_6;
}
