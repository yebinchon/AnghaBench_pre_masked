
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct block_device {int dummy; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int gfp_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (struct bio*,struct block_device*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static struct bio *
FUNC_2(struct block_device *VAR_3,
  sector_t VAR_4, int VAR_5,
  gfp_t VAR_6)
{
 struct bio *VAR_7;


 VAR_6 &= VAR_0;
 VAR_7 = FUNC_0(VAR_6, VAR_5);

 if (VAR_7 == ((void*)0) && (VAR_2->flags & VAR_1)) {
  while (!VAR_7 && (VAR_5 /= 2))
   VAR_7 = FUNC_0(VAR_6, VAR_5);
 }

 if (VAR_7) {
  FUNC_1(VAR_7, VAR_3);
  VAR_7->bi_iter.bi_sector = VAR_4;
 }
 return VAR_7;
}
