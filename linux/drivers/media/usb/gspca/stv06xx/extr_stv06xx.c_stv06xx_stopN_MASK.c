
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int (* stop ) (struct sd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 int VAR_3;
 struct sd *VAR_4 = (struct sd *) VAR_2;


 VAR_3 = FUNC_2(VAR_4, VAR_1, 0);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = VAR_4->sensor->stop(VAR_4);

out:
 if (VAR_3 < 0)
  FUNC_0(VAR_2, VAR_0, "Failed to stop stream\n");
 else
  FUNC_0(VAR_2, VAR_0, "Stopped streaming\n");
}
