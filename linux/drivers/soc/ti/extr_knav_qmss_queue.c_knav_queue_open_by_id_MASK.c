
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_queue_inst {int dummy; } ;
struct knav_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct knav_queue* FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 struct knav_queue* FUNC_1 (struct knav_queue_inst*,char const*,unsigned int) ;
 int VAR_4 ;
 struct knav_queue_inst* FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct knav_queue_inst*) ;
 int FUNC_4 (struct knav_queue_inst*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct knav_queue *
FUNC_7(const char *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 struct knav_queue_inst *VAR_8;
 struct knav_queue *VAR_9;

 FUNC_5(&VAR_4);

 VAR_9 = FUNC_0(-VAR_2);
 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8)
  goto unlock_ret;

 VAR_9 = FUNC_0(-VAR_1);
 if (!(VAR_7 & VAR_3) && FUNC_3(VAR_8))
  goto unlock_ret;

 VAR_9 = FUNC_0(-VAR_0);
 if ((VAR_7 & VAR_3) &&
     (FUNC_3(VAR_8) && !FUNC_4(VAR_8)))
  goto unlock_ret;

 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_7);

unlock_ret:
 FUNC_6(&VAR_4);

 return VAR_9;
}
