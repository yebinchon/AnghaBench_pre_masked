
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int reg08; } ;
struct TYPE_2__ {int needs_full_bandwidth; } ;
struct gspca_dev {TYPE_1__ cam; } ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 VAR_0->cam.needs_full_bandwidth = (VAR_1->reg08 >= 4) ? 1 : 0;
 return 0;
}
