
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int iov; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iov_iter*,size_t) ;
 size_t FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*,int ,int ,int,size_t) ;
 size_t FUNC_3 (int ,int) ;

__attribute__((used)) static size_t FUNC_4(struct vhost_virtqueue *VAR_1, struct iov_iter *VAR_2,
       size_t VAR_3, int VAR_4)
{

 size_t VAR_5 = FUNC_3(VAR_1->iov, VAR_4);

 FUNC_2(VAR_2, VAR_0, VAR_1->iov, VAR_4, VAR_5);
 FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_2);
}
