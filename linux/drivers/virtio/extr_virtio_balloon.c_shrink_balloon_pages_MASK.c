
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {scalar_t__ num_pages; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct virtio_balloon*,unsigned long) ;
 int FUNC_1 (struct virtio_balloon*) ;

__attribute__((used)) static unsigned long FUNC_2(struct virtio_balloon *VAR_1,
       unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;






 while (VAR_1->num_pages && VAR_2) {
  VAR_3 += FUNC_0(VAR_1, VAR_2) /
     VAR_0;
  VAR_2 -= VAR_3;
 }
 FUNC_1(VAR_1);

 return VAR_3;
}
