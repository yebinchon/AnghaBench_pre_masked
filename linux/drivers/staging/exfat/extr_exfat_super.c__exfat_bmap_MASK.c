
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct address_space {int host; } ;
typedef int sector_t ;
struct TYPE_2__ {int truncate_lock; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct address_space*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static sector_t FUNC_4(struct address_space *VAR_1, sector_t VAR_2)
{
 sector_t VAR_3;


 FUNC_1(&FUNC_0(VAR_1->host)->truncate_lock);
 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 FUNC_3(&FUNC_0(VAR_1->host)->truncate_lock);

 return VAR_3;
}
