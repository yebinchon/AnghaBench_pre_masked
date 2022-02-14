
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_usb_adapter {size_t id; int * fe; } ;
struct af9015_state {int fe_mutex; struct af9013_platform_data* af9013_pdata; } ;
struct af9013_platform_data {int (* pid_filter ) (int ,int,int ,int) ;} ;


 struct af9015_state* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_0, int VAR_1,
        u16 VAR_2, int VAR_3)
{
 struct af9015_state *VAR_4 = FUNC_0(VAR_0);
 struct af9013_platform_data *VAR_5 = &VAR_4->af9013_pdata[VAR_0->id];
 int VAR_6;

 FUNC_1(&VAR_4->fe_mutex);
 VAR_6 = VAR_5->pid_filter(VAR_0->fe[0], VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->fe_mutex);

 return VAR_6;
}
