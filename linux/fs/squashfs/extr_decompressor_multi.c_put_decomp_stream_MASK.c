
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_stream {int wait; int mutex; int strm_list; } ;
struct decomp_stream {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct decomp_stream *VAR_0,
    struct squashfs_stream *VAR_1)
{
 FUNC_1(&VAR_1->mutex);
 FUNC_0(&VAR_0->list, &VAR_1->strm_list);
 FUNC_2(&VAR_1->mutex);
 FUNC_3(&VAR_1->wait);
}
