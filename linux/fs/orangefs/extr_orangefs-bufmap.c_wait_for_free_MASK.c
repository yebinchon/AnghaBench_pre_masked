
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
struct slot_map {scalar_t__ c; TYPE_1__ q; } ;
struct TYPE_8__ {int entry; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 long VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 TYPE_2__ VAR_8 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct slot_map *VAR_9)
{
 long VAR_10 = VAR_7 * VAR_2;
 FUNC_0(VAR_8);

 do {
  long VAR_11 = VAR_10, VAR_12;
  if (FUNC_4(FUNC_6(&VAR_8.entry)))
   FUNC_1(&VAR_9->q, &VAR_8);
  FUNC_8(VAR_4);

  if (VAR_9->c > 0)
   break;

  if (VAR_9->c < 0) {


   if (VAR_11 > VAR_3 * VAR_2)
    VAR_11 = VAR_3 * VAR_2;
  }
  FUNC_11(&VAR_9->q.lock);
  VAR_12 = FUNC_7(VAR_11);
  FUNC_10(&VAR_9->q.lock);
  if (FUNC_12(!VAR_12) && VAR_11 != VAR_10 && VAR_9->c < 0)
   VAR_10 = VAR_12;
  else
   VAR_10 = VAR_12 + (VAR_10 - VAR_11);
  if (FUNC_9(VAR_6))
   VAR_10 = -VAR_0;
 } while (VAR_10 > 0);

 if (!FUNC_6(&VAR_8.entry))
  FUNC_5(&VAR_8.entry);
 else if (VAR_10 <= 0 && FUNC_13(&VAR_9->q))
  FUNC_3(&VAR_9->q, VAR_4, ((void*)0));
 FUNC_2(VAR_5);

 if (FUNC_4(VAR_10 > 0))
  return 0;

 return VAR_10 < 0 ? -VAR_0 : -VAR_1;
}
