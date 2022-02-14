
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct virtio_balloon*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_2(struct virtio_balloon *VAR_1,
           unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_2,
     1 << VAR_0);
 VAR_3 = VAR_2 >> VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_3);

 return VAR_4 << VAR_0;
}
