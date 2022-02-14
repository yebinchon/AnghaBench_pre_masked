
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver_data; } ;
struct eisa_device {TYPE_1__ id; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int ) ;
 struct eisa_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, struct device *VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = FUNC_0(VAR_0);
    struct eisa_device *VAR_6;

    *VAR_1 = '\0';
    VAR_6 = FUNC_2 (VAR_2);
    VAR_3 = VAR_6->id.driver_data;

    if (VAR_3 >= 0 && VAR_3 < VAR_5) {
     FUNC_1 (VAR_1, VAR_0[VAR_3]);
     VAR_4 = 1;
    }

    return VAR_4;
}
