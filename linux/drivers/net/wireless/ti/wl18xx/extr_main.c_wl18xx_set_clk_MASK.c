
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct wl1271 {int * ptable; } ;
struct TYPE_4__ {int n; int m; int p; int q; scalar_t__ swallow; } ;
struct TYPE_3__ {int n; int m; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,int,int,int,int,char*) ;
 TYPE_2__* VAR_25 ;
 TYPE_1__* VAR_26 ;
 int FUNC_2 (struct wl1271*,int ,size_t*) ;
 int FUNC_3 (struct wl1271*,int ,int) ;
 int FUNC_4 (struct wl1271*,int *) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_27)
{
 u16 VAR_28;
 int VAR_29;

 VAR_29 = FUNC_4(VAR_27, &VAR_27->ptable[VAR_1]);
 if (VAR_29 < 0)
  goto out;



 VAR_29 = FUNC_2(VAR_27, VAR_24, &VAR_28);
 if (VAR_29 < 0)
  goto out;

 FUNC_1(VAR_0, "clock freq %d (%d, %d, %d, %d, %s)", VAR_28,
       VAR_25[VAR_28].n, VAR_25[VAR_28].m,
       VAR_25[VAR_28].p, VAR_25[VAR_28].q,
       VAR_25[VAR_28].swallow ? "swallow" : "spit");


 VAR_29 = FUNC_3(VAR_27, VAR_3,
       VAR_26[VAR_28].n);
 if (VAR_29 < 0)
  goto out;

 VAR_29 = FUNC_3(VAR_27, VAR_2,
       VAR_26[VAR_28].m);
 if (VAR_29 < 0)
  goto out;


 VAR_29 = FUNC_3(VAR_27, VAR_4,
       VAR_5);
 if (VAR_29 < 0)
  goto out;

 VAR_29 = FUNC_3(VAR_27, VAR_8,
       VAR_25[VAR_28].n);
 if (VAR_29 < 0)
  goto out;

 VAR_29 = FUNC_3(VAR_27, VAR_7,
       VAR_25[VAR_28].m);
 if (VAR_29 < 0)
  goto out;

 if (VAR_25[VAR_28].swallow) {

  VAR_29 = FUNC_3(VAR_27, VAR_13,
        VAR_25[VAR_28].q &
        VAR_14);
  if (VAR_29 < 0)
   goto out;


  VAR_29 = FUNC_3(VAR_27, VAR_15,
     (VAR_25[VAR_28].q >> 16) &
     VAR_16);
  if (VAR_29 < 0)
   goto out;


  VAR_29 = FUNC_3(VAR_27, VAR_9,
        VAR_25[VAR_28].p &
        VAR_10);
  if (VAR_29 < 0)
   goto out;


  VAR_29 = FUNC_3(VAR_27, VAR_11,
     (VAR_25[VAR_28].p >> 16) &
     VAR_12);
  if (VAR_29 < 0)
   goto out;
 } else {
  VAR_29 = FUNC_3(VAR_27, VAR_17,
        VAR_18);
  if (VAR_29 < 0)
   goto out;
 }


 VAR_29 = FUNC_3(VAR_27, VAR_22,
       VAR_23);
 if (VAR_29 < 0)
  goto out;


 VAR_29 = FUNC_3(VAR_27, VAR_19, VAR_20);
 if (VAR_29 < 0)
  goto out;

 FUNC_0(1000);


 VAR_29 = FUNC_3(VAR_27, VAR_19, VAR_21);
 if (VAR_29 < 0)
  goto out;


 VAR_29 = FUNC_3(VAR_27, VAR_4,
       VAR_6);

out:
 return VAR_29;
}
