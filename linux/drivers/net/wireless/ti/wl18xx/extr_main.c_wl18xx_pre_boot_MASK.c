
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int * ptable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*,int *) ;
 int FUNC_4 (struct wl1271*,int ,int ) ;
 int FUNC_5 (struct wl1271*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0)
  goto out;


 VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_2);
 if (VAR_6 < 0)
  goto out;

 FUNC_0(500);

 VAR_6 = FUNC_3(VAR_5, &VAR_5->ptable[VAR_0]);
 if (VAR_6 < 0)
  goto out;


 VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_3);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_1(VAR_5);

out:
 return VAR_6;
}
