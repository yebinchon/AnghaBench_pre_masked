
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct most_interface {int dummy; } ;
struct hdm_channel {int is_initialized; scalar_t__* reset_dbr_size; int pending_list; int started_list; int name; int ch; } ;
struct dim2_hdm {int atx_idx; struct hdm_channel* hch; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 struct dim2_hdm* FUNC_3 (struct most_interface*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct most_interface *VAR_6, int VAR_7)
{
 struct dim2_hdm *VAR_8 = FUNC_3(VAR_6);
 struct hdm_channel *VAR_9 = VAR_8->hch + VAR_7;
 unsigned long VAR_10;
 u8 VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_7 < 0 || VAR_7 >= VAR_1);

 if (!VAR_9->is_initialized)
  return -VAR_3;

 FUNC_7(&VAR_4);
 FUNC_5(&VAR_5, VAR_10);
 VAR_11 = FUNC_2(&VAR_9->ch);
 VAR_9->is_initialized = 0;
 if (VAR_7 == VAR_8->atx_idx)
  VAR_8->atx_idx = -1;
 FUNC_6(&VAR_5, VAR_10);
 FUNC_8(&VAR_4);
 if (VAR_11 != VAR_0) {
  FUNC_4("HAL Failed to close channel %s\n", VAR_9->name);
  VAR_12 = -VAR_2;
 }

 FUNC_1(&VAR_9->started_list);
 FUNC_1(&VAR_9->pending_list);
 if (VAR_9->reset_dbr_size)
  *VAR_9->reset_dbr_size = 0;

 return VAR_12;
}
