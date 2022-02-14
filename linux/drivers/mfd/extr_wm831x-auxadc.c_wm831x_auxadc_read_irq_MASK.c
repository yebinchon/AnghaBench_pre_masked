
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_auxadc_req {int input; int val; int list; int done; } ;
struct wm831x {int auxadc_active; int auxadc_lock; int dev; int auxadc_pending; } ;
typedef enum wm831x_auxadc { ____Placeholder_wm831x_auxadc } wm831x_auxadc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm831x_auxadc_req*) ;
 struct wm831x_auxadc_req* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct wm831x *VAR_8,
      enum wm831x_auxadc VAR_9)
{
 struct wm831x_auxadc_req *VAR_10;
 int VAR_11;
 bool VAR_12 = 0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_1(&VAR_10->done);
 VAR_10->input = VAR_9;
 VAR_10->val = -VAR_1;

 FUNC_7(&VAR_8->auxadc_lock);


 FUNC_4(&VAR_10->list, &VAR_8->auxadc_pending);

 VAR_12 = !VAR_8->auxadc_active;

 if (VAR_12) {
  VAR_11 = FUNC_10(VAR_8, VAR_3,
          VAR_6, VAR_6);
  if (VAR_11 != 0) {
   FUNC_0(VAR_8->dev, "Failed to enable AUXADC: %d\n",
    VAR_11);
   goto out;
  }
 }


 if (!(VAR_8->auxadc_active & (1 << VAR_9))) {
  VAR_11 = FUNC_10(VAR_8, VAR_4,
          1 << VAR_9, 1 << VAR_9);
  if (VAR_11 != 0) {
   FUNC_0(VAR_8->dev,
    "Failed to set AUXADC source: %d\n", VAR_11);
   goto out;
  }

  VAR_8->auxadc_active |= 1 << VAR_9;
 }


 if (VAR_12) {
  VAR_11 = FUNC_10(VAR_8, VAR_3,
          VAR_5 |
          VAR_7,
          VAR_5 |
          VAR_7);
  if (VAR_11 != 0) {
   FUNC_0(VAR_8->dev, "Failed to start AUXADC: %d\n",
    VAR_11);
   goto out;
  }
 }

 FUNC_8(&VAR_8->auxadc_lock);


 FUNC_9(&VAR_10->done, FUNC_6(500));

 FUNC_7(&VAR_8->auxadc_lock);

 FUNC_5(&VAR_10->list);
 VAR_11 = VAR_10->val;

out:
 FUNC_8(&VAR_8->auxadc_lock);

 FUNC_2(VAR_10);

 return VAR_11;
}
