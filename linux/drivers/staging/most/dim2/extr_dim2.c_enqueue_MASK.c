
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_interface {int dummy; } ;
struct mbo {scalar_t__ bus_address; int list; } ;
struct hdm_channel {int pending_list; int is_initialized; } ;
struct dim2_hdm {struct hdm_channel* hch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dim2_hdm* FUNC_1 (struct most_interface*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct hdm_channel*) ;

__attribute__((used)) static int FUNC_6(struct most_interface *VAR_4, int VAR_5,
     struct mbo *VAR_6)
{
 struct dim2_hdm *VAR_7 = FUNC_1(VAR_4);
 struct hdm_channel *VAR_8 = VAR_7->hch + VAR_5;
 unsigned long VAR_9;

 FUNC_0(VAR_5 < 0 || VAR_5 >= VAR_0);

 if (!VAR_8->is_initialized)
  return -VAR_2;

 if (VAR_6->bus_address == 0)
  return -VAR_1;

 FUNC_3(&VAR_3, VAR_9);
 FUNC_2(&VAR_6->list, &VAR_8->pending_list);
 FUNC_4(&VAR_3, VAR_9);

 (void)FUNC_5(VAR_8);

 return 0;
}
