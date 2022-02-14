
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct enic {int rq_count; int devcmd_lock; int vdev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct enic*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*,int const,int,int const,int const,int) ;
 scalar_t__ FUNC_4 (struct enic*,int const) ;
 int FUNC_5 (struct enic*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int*) ;

__attribute__((used)) static int FUNC_9(struct enic *VAR_5)
{
 struct device *VAR_6 = FUNC_2(VAR_5);
 const u8 VAR_7 = 0;
 const u8 VAR_8 = 7;
 const u8 VAR_9 = 0;
 u8 VAR_10;
 int VAR_11;
 u8 VAR_12 = FUNC_0(VAR_5, VAR_4) && (VAR_5->rq_count > 1);

 FUNC_6(&VAR_5->devcmd_lock);
 VAR_11 = FUNC_8(VAR_5->vdev, &VAR_10);
 FUNC_7(&VAR_5->devcmd_lock);
 if (VAR_11) {


  VAR_10 = VAR_0 |
    VAR_2 |
    VAR_1 |
    VAR_3;
 }

 if (VAR_12) {
  if (!FUNC_5(VAR_5)) {
   if (FUNC_4(VAR_5, VAR_8)) {
    VAR_12 = 0;
    FUNC_1(VAR_6, "RSS disabled, "
     "Failed to set RSS cpu indirection table.");
   }
  } else {
   VAR_12 = 0;
   FUNC_1(VAR_6, "RSS disabled, Failed to set RSS key.\n");
  }
 }

 return FUNC_3(VAR_5, VAR_7, VAR_10,
  VAR_8, VAR_9, VAR_12);
}
