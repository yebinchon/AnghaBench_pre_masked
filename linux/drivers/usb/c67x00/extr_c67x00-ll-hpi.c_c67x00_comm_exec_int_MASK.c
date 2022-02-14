
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct c67x00_lcp_int_data {int * regs; } ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ lcp; } ;
struct c67x00_device {TYPE_2__ hpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct c67x00_device*,int ) ;
 int FUNC_2 (struct c67x00_device*,int ,int ) ;
 int FUNC_3 (struct c67x00_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct c67x00_device *VAR_3, u16 VAR_4,
    struct c67x00_lcp_int_data *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_4(&VAR_3->hpi.lcp.mutex);
 FUNC_2(VAR_3, VAR_1, VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_2(VAR_3, FUNC_0(VAR_6), VAR_5->regs[VAR_6]);
 FUNC_1(VAR_3, VAR_0);
 VAR_7 = FUNC_3(VAR_3);
 FUNC_5(&VAR_3->hpi.lcp.mutex);

 return VAR_7;
}
