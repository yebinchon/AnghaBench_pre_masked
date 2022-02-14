
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_ring {int dummy; } ;
struct mite_channel {struct mite_ring* ring; } ;
struct mite {int lock; struct mite_channel* channels; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct mite_channel *FUNC_2(struct mite *VAR_0,
         struct mite_ring *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 struct mite_channel *VAR_4 = ((void*)0);
 unsigned long VAR_5;
 int VAR_6;





 FUNC_0(&VAR_0->lock, VAR_5);
 for (VAR_6 = VAR_2; VAR_6 <= VAR_3; ++VAR_6) {
  VAR_4 = &VAR_0->channels[VAR_6];
  if (!VAR_4->ring) {
   VAR_4->ring = VAR_1;
   break;
  }
  VAR_4 = ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_5);
 return VAR_4;
}
